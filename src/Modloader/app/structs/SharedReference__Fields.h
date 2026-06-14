#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedReference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedReference__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedReference__Fields_DEFINED
struct WeakReference;
struct __declspec(align(8)) SharedReference__Fields {
    struct WeakReference* _ref;
    int32_t _locked;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedReference__Fields_FWDDECL)
#define IL2CPP_STRUCT_SharedReference__Fields_FWDDECL
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_SharedReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedReference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SharedReference__Fields_FWDDECL)
#include <Modloader/app/structs/SharedReference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedReference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
