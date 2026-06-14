#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParamAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParamAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamAttribute_DEFINED)
#include <Modloader/app/structs/ParamAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ParamAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ParamAttribute_DEFINED
struct ParamAttribute__Class;
struct ParamAttribute {
    struct ParamAttribute__Class* klass;
    MonitorData* monitor;
    struct ParamAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParamAttribute_FWDDECL)
#define IL2CPP_STRUCT_ParamAttribute_FWDDECL
#include <Modloader/app/structs/ParamAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ParamAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ParamAttribute_FWDDECL)
#include <Modloader/app/structs/ParamAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParamAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
