/* This file is automatically generated from the documentation. EDIT AT YOUR OWN RISK. */

#ifndef CLI_H
#define CLI_H

#include <stddef.h>

struct argument {
	const char *name;
	char separator;
	const char *value;
};

typedef void (*option_handler_t)(char *value);

struct option {
	const char *class;
	option_handler_t handler;
	const char *description;
	struct argument arguments[5];
};

#define VERSION "0.7.0"
#define SUBTITLE "chroot, mount --bind, and binfmt_misc with no privilege"
#define SYNOPSIS "proot [option] ... /path/to/guest/rootfs [program [arg] ...]"

static char *recommended_bindings[] = {
	  "/etc/host.conf",
	  "/etc/hosts",
	  "/etc/hosts.equiv",
	  "/etc/mtab",
	  "/etc/netgroup",
	  "/etc/networks",
	  "/etc/passwd",
	  "/etc/group",
	  "/etc/nsswitch.conf",
	  "/etc/resolv.conf",
	  "/dev",
	  "/sys",
	  "/proc",
	  "/tmp",
	  "/etc/localtime",
	  "$HOME",
	  NULL
};

static void handle_option_b(char *value);
static void handle_option_q(char *value);
static void handle_option_w(char *value);
static void handle_option_e(char *value);
static void handle_option_u(char *value);
static void handle_option_p(char *value);
static void handle_option_a(char *value);
static void handle_option_k(char *value);
static void handle_option_0(char *value);
static void handle_option_v(char *value);
static void handle_option_V(char *value);
static void handle_option_h(char *value);
static void handle_option_B(char *value);
static void handle_option_Q(char *value);
static void handle_option_W(char *value);

static struct option options[] = {
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-b", .separator = ' ', .value = "path" },
		{ .name = "--bind", .separator = '=', .value = "path" },
		{ .name = "-m", .separator = ' ', .value = "path" },
		{ .name = "--mount", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_b,
	  .description = "Make the content of *path* accessible in the guest rootfs.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-q", .separator = ' ', .value = "command" },
		{ .name = "--qemu", .separator = '=', .value = "command" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_q,
	  .description = "Execute programs through QEMU as specified by *command*.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-w", .separator = ' ', .value = "path" },
		{ .name = "--pwd", .separator = '=', .value = "path" },
		{ .name = "--cwd", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_w,
	  .description = "Set the working directory to *path*, default is \"/\".",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-e", .separator = '\0', .value = NULL },
		{ .name = "--ignore-elf-interpreter", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_e,
	  .description = "Don't use the ELF interpreter to load native programs.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-u", .separator = '\0', .value = NULL },
		{ .name = "--allow-unkonwn-syscalls", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_u,
	  .description = "Allow the execution of unknown syscalls.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-p", .separator = '\0', .value = NULL },
		{ .name = "--allow-ptrace-syscall", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_p,
	  .description = "Allow the execution of the syscall \"ptrace\".",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-a", .separator = '\0', .value = NULL },
		{ .name = "--disable-aslr", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_a,
	  .description = "Disable randomization of the virtual address space (ASLR).",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-k", .separator = ' ', .value = "string" },
		{ .name = "--kernel-release", .separator = '=', .value = "string" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_k,
	  .description = "Force syscall \"uname\" to report *string* as kernel release.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-0", .separator = '\0', .value = NULL },
		{ .name = "--root-id", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_0,
	  .description = "Force syscalls \"get*id\" to report identity 0, aka \"root\".",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-v", .separator = '\0', .value = NULL },
		{ .name = "--verbose", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_v,
	  .description = "Increase the level of debug information.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-V", .separator = '\0', .value = NULL },
		{ .name = "--version", .separator = '\0', .value = NULL },
		{ .name = "--about", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_V,
	  .description = "Print version, copyright, license, and contact, then exit.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-h", .separator = '\0', .value = NULL },
		{ .name = "--help", .separator = '\0', .value = NULL },
		{ .name = "--usage", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_h,
	  .description = "Print the version and the command-line usage, then exit.",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-B", .separator = '\0', .value = NULL },
		{ .name = "-M", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_B,
	  .description = "Alias: \"-b path\" for each path of a recommended list.",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-Q", .separator = ' ', .value = "command" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_Q,
	  .description = "Alias: \"-q *command* -a -B\".",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-W", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_W,
	  .description = "Alias: \"-b $PWD -w $PWD\".",
	},
};

#endif /* CLI_H */
