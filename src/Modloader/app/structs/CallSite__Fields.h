#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallSite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallSite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSite__Fields_DEFINED)
#define IL2CPP_STRUCT_CallSite__Fields_DEFINED
struct CallSiteBinder;
struct __declspec(align(8)) CallSite__Fields {
    struct CallSiteBinder* _binder;
    bool _match;
};
#endif
#if !defined(IL2CPP_STRUCT_CallSite__Fields_FWDDECL)
#define IL2CPP_STRUCT_CallSite__Fields_FWDDECL
#include <Modloader/app/structs/CallSiteBinder.h>
#endif
#undef IL2CPP_STRUCT_CallSite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallSite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallSite__Fields_FWDDECL)
#include <Modloader/app/structs/CallSite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallSite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
