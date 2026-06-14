#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Type__StaticFields_DEFINED
struct MemberFilter;
struct Object;
struct Type__Array;
struct Binder;
struct Type__StaticFields {
    struct MemberFilter* FilterAttribute;
    struct MemberFilter* FilterName;
    struct MemberFilter* FilterNameIgnoreCase;
    struct Object* Missing;
    uint16_t Delimiter;
    struct Type__Array* EmptyTypes;
    struct Binder* defaultBinder;
};
#endif
#if !defined(IL2CPP_STRUCT_Type__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Type__StaticFields_FWDDECL
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/MemberFilter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_Type__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Type__StaticFields_FWDDECL)
#include <Modloader/app/structs/Type__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
