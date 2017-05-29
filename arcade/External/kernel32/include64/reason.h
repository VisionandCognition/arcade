#if !defined SENTINEL_Reason
# define SENTINEL_Reason
#define SHTDN_REASON_FLAG_COMMENT_REQUIRED 0x1000000
#define SHTDN_REASON_FLAG_DIRTY_PROBLEM_ID_REQUIRED 0x2000000
#define SHTDN_REASON_FLAG_CLEAN_UI 0x4000000
#define SHTDN_REASON_FLAG_DIRTY_UI 0x8000000
#define SHTDN_REASON_FLAG_USER_DEFINED 0x40000000
#define SHTDN_REASON_FLAG_PLANNED 0x80000000
#define SHTDN_REASON_MAJOR_OTHER 0
#define SHTDN_REASON_MAJOR_NONE 0
#define SHTDN_REASON_MAJOR_HARDWARE 0x10000
#define SHTDN_REASON_MAJOR_OPERATINGSYSTEM 0x20000
#define SHTDN_REASON_MAJOR_SOFTWARE 0x30000
#define SHTDN_REASON_MAJOR_APPLICATION 0x40000
#define SHTDN_REASON_MAJOR_SYSTEM 0x50000
#define SHTDN_REASON_MAJOR_POWER 0x60000
#define SHTDN_REASON_MAJOR_LEGACY_API 0x70000
#define SHTDN_REASON_MINOR_OTHER 0
#define SHTDN_REASON_MINOR_NONE 255
#define SHTDN_REASON_MINOR_MAINTENANCE 1
#define SHTDN_REASON_MINOR_INSTALLATION 2
#define SHTDN_REASON_MINOR_UPGRADE 3
#define SHTDN_REASON_MINOR_RECONFIG 4
#define SHTDN_REASON_MINOR_HUNG 5
#define SHTDN_REASON_MINOR_UNSTABLE 6
#define SHTDN_REASON_MINOR_DISK 7
#define SHTDN_REASON_MINOR_PROCESSOR 8
#define SHTDN_REASON_MINOR_NETWORKCARD 9
#define SHTDN_REASON_MINOR_POWER_SUPPLY 10
#define SHTDN_REASON_MINOR_CORDUNPLUGGED 11
#define SHTDN_REASON_MINOR_ENVIRONMENT 12
#define SHTDN_REASON_MINOR_HARDWARE_DRIVER 13
#define SHTDN_REASON_MINOR_OTHERDRIVER 14
#define SHTDN_REASON_MINOR_BLUESCREEN 15
#define SHTDN_REASON_MINOR_SERVICEPACK 16
#define SHTDN_REASON_MINOR_HOTFIX 17
#define SHTDN_REASON_MINOR_SECURITYFIX 18
#define SHTDN_REASON_MINOR_SECURITY 19
#define SHTDN_REASON_MINOR_NETWORK_CONNECTIVITY 20
#define SHTDN_REASON_MINOR_WMI 21 
#define SHTDN_REASON_MINOR_SERVICEPACK_UNINSTALL 22
#define SHTDN_REASON_MINOR_HOTFIX_UNINSTALL 23
#define SHTDN_REASON_MINOR_SECURITYFIX_UNINSTALL 24
#define SHTDN_REASON_MINOR_MMC 25
#define SHTDN_REASON_MINOR_TERMSRV 32
#define SHTDN_REASON_MINOR_DC_PROMOTION 33
#define SHTDN_REASON_MINOR_DC_DEMOTION 34
#define SHTDN_REASON_UNKNOWN SHTDN_REASON_MINOR_NONE
#define SHTDN_REASON_LEGACY_API (SHTDN_REASON_MAJOR_LEGACY_API|SHTDN_REASON_FLAG_PLANNED)
#define SHTDN_REASON_VALID_BIT_MASK 0xc0ffffff
#define PCLEANUI (SHTDN_REASON_FLAG_PLANNED|SHTDN_REASON_FLAG_CLEAN_UI)
#define UCLEANUI (SHTDN_REASON_FLAG_CLEAN_UI)
#define PDIRTYUI (SHTDN_REASON_FLAG_PLANNED|SHTDN_REASON_FLAG_DIRTY_UI)
#define UDIRTYUI (SHTDN_REASON_FLAG_DIRTY_UI)
#define MAX_REASON_NAME_LEN 64
#define MAX_REASON_DESC_LEN 256
#define MAX_REASON_BUGID_LEN 32
#define MAX_REASON_COMMENT_LEN 512
#define SHUTDOWN_TYPE_LEN 32
#define POLICY_SHOWREASONUI_NEVER				0
#define POLICY_SHOWREASONUI_ALWAYS				1
#define POLICY_SHOWREASONUI_WORKSTATIONONLY		2
#define POLICY_SHOWREASONUI_SERVERONLY			3
#define SNAPSHOT_POLICY_NEVER 0
#define SNAPSHOT_POLICY_ALWAYS 1
#define SNAPSHOT_POLICY_UNPLANNED 2
#define MAX_NUM_REASONS 256
#endif 