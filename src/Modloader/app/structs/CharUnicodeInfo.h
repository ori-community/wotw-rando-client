#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharUnicodeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharUnicodeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo_DEFINED)
#define IL2CPP_STRUCT_CharUnicodeInfo_DEFINED
struct CharUnicodeInfo__Class;
struct CharUnicodeInfo {
    struct CharUnicodeInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo_FWDDECL)
#define IL2CPP_STRUCT_CharUnicodeInfo_FWDDECL
#include <Modloader/app/structs/CharUnicodeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CharUnicodeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharUnicodeInfo_DEFINED) && !defined(IL2CPP_STRUCT_CharUnicodeInfo_FWDDECL)
#include <Modloader/app/structs/CharUnicodeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharUnicodeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
