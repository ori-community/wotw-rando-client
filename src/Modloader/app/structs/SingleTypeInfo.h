#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleTypeInfo_DEFINED)
#include <Modloader/app/structs/SingleTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SingleTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SingleTypeInfo_DEFINED
struct SingleTypeInfo__Class;
struct SingleTypeInfo {
    struct SingleTypeInfo__Class* klass;
    MonitorData* monitor;
    struct SingleTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingleTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_SingleTypeInfo_FWDDECL
#include <Modloader/app/structs/SingleTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_SingleTypeInfo_FWDDECL)
#include <Modloader/app/structs/SingleTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
