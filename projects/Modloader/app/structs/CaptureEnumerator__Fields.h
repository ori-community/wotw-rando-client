#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureEnumerator__Fields_DEFINED
struct CaptureCollection;
struct __declspec(align(8)) CaptureEnumerator__Fields {
    struct CaptureCollection* _rcc;
    int32_t _curindex;
};
#endif
#if !defined(IL2CPP_STRUCT_CaptureEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CaptureEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/CaptureCollection.h>
#endif
#undef IL2CPP_STRUCT_CaptureEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CaptureEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/CaptureEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
