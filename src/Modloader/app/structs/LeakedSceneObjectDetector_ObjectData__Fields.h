#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_DEFINED
struct String;
struct __declspec(align(8)) LeakedSceneObjectDetector_ObjectData__Fields {
    int32_t ID;
    float StartTime;
    struct String* Name;
    struct String* Scene;
};
#endif
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector_ObjectData__Fields_FWDDECL)
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakedSceneObjectDetector_ObjectData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
