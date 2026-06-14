#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariableInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariableInfo_DEFINED)
#include <Modloader/app/structs/LocalVariableInfo__Fields.h>
#if defined(IL2CPP_STRUCT_LocalVariableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariableInfo_DEFINED
struct LocalVariableInfo__Class;
struct LocalVariableInfo {
    struct LocalVariableInfo__Class* klass;
    MonitorData* monitor;
    struct LocalVariableInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalVariableInfo_FWDDECL)
#define IL2CPP_STRUCT_LocalVariableInfo_FWDDECL
#include <Modloader/app/structs/LocalVariableInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalVariableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariableInfo_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariableInfo_FWDDECL)
#include <Modloader/app/structs/LocalVariableInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariableInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
