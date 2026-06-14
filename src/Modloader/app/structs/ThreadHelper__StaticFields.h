#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ThreadHelper__StaticFields_DEFINED
struct ContextCallback;
struct ThreadHelper__StaticFields {
    struct ContextCallback* _ccb;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ThreadHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/ContextCallback.h>
#endif
#undef IL2CPP_STRUCT_ThreadHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/ThreadHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
