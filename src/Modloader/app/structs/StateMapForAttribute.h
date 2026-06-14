#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMapForAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMapForAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMapForAttribute_DEFINED)
#include <Modloader/app/structs/StateMapForAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_StateMapForAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMapForAttribute_DEFINED
struct StateMapForAttribute__Class;
struct StateMapForAttribute {
    struct StateMapForAttribute__Class* klass;
    MonitorData* monitor;
    struct StateMapForAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMapForAttribute_FWDDECL)
#define IL2CPP_STRUCT_StateMapForAttribute_FWDDECL
#include <Modloader/app/structs/StateMapForAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMapForAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMapForAttribute_DEFINED) && !defined(IL2CPP_STRUCT_StateMapForAttribute_FWDDECL)
#include <Modloader/app/structs/StateMapForAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMapForAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
