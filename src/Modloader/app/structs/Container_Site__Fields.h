#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Container_Site__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Container_Site__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Site__Fields_DEFINED)
#define IL2CPP_STRUCT_Container_Site__Fields_DEFINED
struct IComponent;
struct Container;
struct String;
struct __declspec(align(8)) Container_Site__Fields {
    struct IComponent* component;
    struct Container* container;
    struct String* name;
};
#endif
#if !defined(IL2CPP_STRUCT_Container_Site__Fields_FWDDECL)
#define IL2CPP_STRUCT_Container_Site__Fields_FWDDECL
#include <Modloader/app/structs/Container.h>
#include <Modloader/app/structs/IComponent.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Container_Site__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Container_Site__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Container_Site__Fields_FWDDECL)
#include <Modloader/app/structs/Container_Site__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Container_Site__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
