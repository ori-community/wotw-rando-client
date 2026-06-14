#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameOptions__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameOptions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NameOptions__StaticFields_DEFINED
struct NameOptions_NameDatabase;
struct NameOptions__StaticFields {
    struct NameOptions_NameDatabase* m_database;
};
#endif
#if !defined(IL2CPP_STRUCT_NameOptions__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NameOptions__StaticFields_FWDDECL
#include <Modloader/app/structs/NameOptions_NameDatabase.h>
#endif
#undef IL2CPP_STRUCT_NameOptions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NameOptions__StaticFields_FWDDECL)
#include <Modloader/app/structs/NameOptions__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameOptions__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
