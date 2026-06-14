#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakedSceneObjectDetector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_DEFINED)
#include <Modloader/app/structs/LeakedSceneObjectDetector__Fields.h>
#if defined(IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_DEFINED
struct LeakedSceneObjectDetector__Class;
struct LeakedSceneObjectDetector {
    struct LeakedSceneObjectDetector__Class* klass;
    MonitorData* monitor;
    struct LeakedSceneObjectDetector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_FWDDECL)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_FWDDECL
#include <Modloader/app/structs/LeakedSceneObjectDetector__Class.h>
#endif
#undef IL2CPP_STRUCT_LeakedSceneObjectDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_DEFINED) && !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_FWDDECL)
#include <Modloader/app/structs/LeakedSceneObjectDetector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakedSceneObjectDetector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
