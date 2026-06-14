#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_DEFINED
struct String;
struct List_1_UnityEngine_Object_;
struct TimesliceResourceDestroyTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String* _SceneName_k__BackingField;
    struct List_1_UnityEngine_Object_* m_targetObjects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceResourceDestroyTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceResourceDestroyTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceResourceDestroyTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
