#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityContext__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityContext__Fields_DEFINED
struct Entity;
struct __declspec(align(8)) EntityContext__Fields {
    struct Entity* _Entity_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityContext__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#endif
#undef IL2CPP_STRUCT_EntityContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityContext__Fields_FWDDECL)
#include <Modloader/app/structs/EntityContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
