#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Log__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Log__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Log__StaticFields_DEFINED
struct Log;
struct Log__StaticFields {
    bool _Verbose_k__BackingField;
    struct Log* instance;
};
#endif
#if !defined(IL2CPP_STRUCT_Log__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Log__StaticFields_FWDDECL
#include <Modloader/app/structs/Log.h>
#endif
#undef IL2CPP_STRUCT_Log__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Log__StaticFields_FWDDECL)
#include <Modloader/app/structs/Log__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Log__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
