#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_DEFINED
struct Int32__Array;
struct String__Array;
struct __declspec(align(8)) MemoryLabelCaptureAgent__Fields {
    struct Int32__Array* m_lastValues;
    struct Int32__Array* m_currentValues;
    struct Int32__Array* m_labelIndices;
    struct String__Array* m_labelsToTrack;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryLabelCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryLabelCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryLabelCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
