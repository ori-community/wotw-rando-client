#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NestedContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NestedContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer__Fields_DEFINED)
#include <Modloader/app/structs/Container__Fields.h>
#if defined(IL2CPP_STRUCT_Container__Fields_DEFINED)
#define IL2CPP_STRUCT_NestedContainer__Fields_DEFINED
struct IComponent;
struct NestedContainer__Fields {
    struct Container__Fields _;
    struct IComponent* _owner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NestedContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_NestedContainer__Fields_FWDDECL
#include <Modloader/app/structs/IComponent.h>
#endif
#undef IL2CPP_STRUCT_NestedContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NestedContainer__Fields_FWDDECL)
#include <Modloader/app/structs/NestedContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NestedContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
