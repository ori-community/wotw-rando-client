#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NestedContainer_Site__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NestedContainer_Site__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_Site__Fields_DEFINED)
#define IL2CPP_STRUCT_NestedContainer_Site__Fields_DEFINED
struct IComponent;
struct NestedContainer;
struct String;
struct __declspec(align(8)) NestedContainer_Site__Fields {
    struct IComponent* component;
    struct NestedContainer* container;
    struct String* name;
};
#endif
#if !defined(IL2CPP_STRUCT_NestedContainer_Site__Fields_FWDDECL)
#define IL2CPP_STRUCT_NestedContainer_Site__Fields_FWDDECL
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/NestedContainer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NestedContainer_Site__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_Site__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NestedContainer_Site__Fields_FWDDECL)
#include <Modloader/app/structs/NestedContainer_Site__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NestedContainer_Site__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
