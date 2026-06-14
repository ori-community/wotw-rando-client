#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParamArrayAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParamArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamArrayAttribute_DEFINED)
#define IL2CPP_STRUCT_ParamArrayAttribute_DEFINED
struct ParamArrayAttribute__Class;
struct ParamArrayAttribute {
    struct ParamArrayAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ParamArrayAttribute_FWDDECL)
#define IL2CPP_STRUCT_ParamArrayAttribute_FWDDECL
#include <Modloader/app/structs/ParamArrayAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ParamArrayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamArrayAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ParamArrayAttribute_FWDDECL)
#include <Modloader/app/structs/ParamArrayAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParamArrayAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
