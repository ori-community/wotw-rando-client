#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListBindableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListBindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListBindableAttribute_DEFINED)
#include <Modloader/app/structs/ListBindableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ListBindableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ListBindableAttribute_DEFINED
struct ListBindableAttribute__Class;
struct ListBindableAttribute {
    struct ListBindableAttribute__Class* klass;
    MonitorData* monitor;
    struct ListBindableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListBindableAttribute_FWDDECL)
#define IL2CPP_STRUCT_ListBindableAttribute_FWDDECL
#include <Modloader/app/structs/ListBindableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ListBindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListBindableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ListBindableAttribute_FWDDECL)
#include <Modloader/app/structs/ListBindableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListBindableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
