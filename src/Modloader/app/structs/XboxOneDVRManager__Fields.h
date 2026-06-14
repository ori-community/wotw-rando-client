#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneDVRManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneDVRManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneDVRManager__Fields_DEFINED
struct String;
struct XboxOneDVRManager__Fields {
    struct MonoBehaviour__Fields _;
    float m_time;
    float m_past;
    struct String* m_clipName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneDVRManager__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxOneDVRManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneDVRManager__Fields_FWDDECL)
#include <Modloader/app/structs/XboxOneDVRManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneDVRManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
