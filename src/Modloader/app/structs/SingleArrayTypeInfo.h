#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/SingleArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SingleArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SingleArrayTypeInfo_DEFINED
struct SingleArrayTypeInfo__Class;
struct SingleArrayTypeInfo {
    struct SingleArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct SingleArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingleArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_SingleArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/SingleArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_SingleArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/SingleArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
