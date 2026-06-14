#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharTypeInfo_DEFINED)
#include <Modloader/app/structs/CharTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CharTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CharTypeInfo_DEFINED
struct CharTypeInfo__Class;
struct CharTypeInfo {
    struct CharTypeInfo__Class* klass;
    MonitorData* monitor;
    struct CharTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_CharTypeInfo_FWDDECL
#include <Modloader/app/structs/CharTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CharTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_CharTypeInfo_FWDDECL)
#include <Modloader/app/structs/CharTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
