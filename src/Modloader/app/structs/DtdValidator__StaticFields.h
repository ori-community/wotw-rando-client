#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdValidator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdValidator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DtdValidator__StaticFields_DEFINED
struct DtdValidator_NamespaceManager;
struct DtdValidator__StaticFields {
    struct DtdValidator_NamespaceManager* namespaceManager;
};
#endif
#if !defined(IL2CPP_STRUCT_DtdValidator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DtdValidator__StaticFields_FWDDECL
#include <Modloader/app/structs/DtdValidator_NamespaceManager.h>
#endif
#undef IL2CPP_STRUCT_DtdValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdValidator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DtdValidator__StaticFields_FWDDECL)
#include <Modloader/app/structs/DtdValidator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdValidator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
