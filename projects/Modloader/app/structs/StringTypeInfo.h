#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringTypeInfo_DEFINED)
#include <Modloader/app/structs/StringTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_StringTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_StringTypeInfo_DEFINED
struct StringTypeInfo__Class;
struct StringTypeInfo {
    struct StringTypeInfo__Class* klass;
    MonitorData* monitor;
    struct StringTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_StringTypeInfo_FWDDECL
#include <Modloader/app/structs/StringTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_StringTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_StringTypeInfo_FWDDECL)
#include <Modloader/app/structs/StringTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
