#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDRSchema_NameType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDRSchema_NameType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema_NameType_DEFINED)
#include <Modloader/app/structs/XDRSchema_NameType__Fields.h>
#if defined(IL2CPP_STRUCT_XDRSchema_NameType__Fields_DEFINED)
#define IL2CPP_STRUCT_XDRSchema_NameType_DEFINED
struct XDRSchema_NameType__Class;
struct XDRSchema_NameType {
    struct XDRSchema_NameType__Class* klass;
    MonitorData* monitor;
    struct XDRSchema_NameType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDRSchema_NameType_FWDDECL)
#define IL2CPP_STRUCT_XDRSchema_NameType_FWDDECL
#include <Modloader/app/structs/XDRSchema_NameType__Class.h>
#endif
#undef IL2CPP_STRUCT_XDRSchema_NameType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema_NameType_DEFINED) && !defined(IL2CPP_STRUCT_XDRSchema_NameType_FWDDECL)
#include <Modloader/app/structs/XDRSchema_NameType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDRSchema_NameType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
