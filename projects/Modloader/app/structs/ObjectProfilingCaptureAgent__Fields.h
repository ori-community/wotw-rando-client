#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_DEFINED
struct String__Array;
struct List_1_System_Int32_;
struct List_1_System_UInt64_;
struct Dictionary_2_System_Int32_System_String_;
struct __declspec(align(8)) ObjectProfilingCaptureAgent__Fields {
    struct String__Array* m_frameData;
    bool m_isProfiling;
    struct List_1_System_Int32_* m_idCache;
    struct List_1_System_Int32_* m_callCountCache;
    struct List_1_System_UInt64_* m_valueCache;
    struct Dictionary_2_System_Int32_System_String_* m_nameCache;
    int32_t m_frameCount;
    int32_t m_sampleInterval;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_UInt64_.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
