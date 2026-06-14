#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoIOStat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoIOStat_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoIOStat_DEFINED)
#include <Modloader/app/structs/FileAttributes__Enum.h>
#if defined(IL2CPP_STRUCT_FileAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoIOStat_DEFINED
struct MonoIOStat {
    FileAttributes__Enum fileAttributes;

    int64_t Length;
    int64_t CreationTime;
    int64_t LastAccessTime;
    int64_t LastWriteTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoIOStat_FWDDECL)
#define IL2CPP_STRUCT_MonoIOStat_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoIOStat_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoIOStat_DEFINED) && !defined(IL2CPP_STRUCT_MonoIOStat_FWDDECL)
#include <Modloader/app/structs/MonoIOStat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoIOStat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
