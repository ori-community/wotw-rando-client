#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_DEFINED
struct String__Array;
struct __declspec(align(8)) SampleOffsetCaptureAgent__Fields {
    struct String__Array* m_frameData;
};
#endif
#if !defined(IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SampleOffsetCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/SampleOffsetCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleOffsetCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
