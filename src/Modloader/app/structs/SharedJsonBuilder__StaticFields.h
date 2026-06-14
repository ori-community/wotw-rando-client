#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_DEFINED
struct IComparer_1_Moon_JsonBuilder_;
struct List_1_Moon_JsonBuilder_;
struct SharedJsonBuilder__StaticFields {
    struct IComparer_1_Moon_JsonBuilder_* s_comparer;
    struct List_1_Moon_JsonBuilder_* s_builders;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_FWDDECL
#include <Modloader/app/structs/IComparer_1_Moon_JsonBuilder_.h>
#include <Modloader/app/structs/List_1_Moon_JsonBuilder_.h>
#endif
#undef IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SharedJsonBuilder__StaticFields_FWDDECL)
#include <Modloader/app/structs/SharedJsonBuilder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedJsonBuilder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
