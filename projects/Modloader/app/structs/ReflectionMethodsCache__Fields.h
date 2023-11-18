#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionMethodsCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionMethodsCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionMethodsCache__Fields_DEFINED
struct ReflectionMethodsCache_Raycast3DCallback;
struct ReflectionMethodsCache_RaycastAllCallback;
struct ReflectionMethodsCache_Raycast2DCallback;
struct ReflectionMethodsCache_GetRayIntersectionAllCallback;
struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback;
struct ReflectionMethodsCache_GetRaycastNonAllocCallback;
struct __declspec(align(8)) ReflectionMethodsCache__Fields {
    struct ReflectionMethodsCache_Raycast3DCallback* raycast3D;
    struct ReflectionMethodsCache_RaycastAllCallback* raycast3DAll;
    struct ReflectionMethodsCache_Raycast2DCallback* raycast2D;
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback* getRayIntersectionAll;
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback* getRaycastNonAlloc;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectionMethodsCache__Fields_FWDDECL
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_GetRaycastNonAllocCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_Raycast2DCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_Raycast3DCallback.h>
#include <Modloader/app/structs/ReflectionMethodsCache_RaycastAllCallback.h>
#endif
#undef IL2CPP_STRUCT_ReflectionMethodsCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMethodsCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionMethodsCache__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectionMethodsCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionMethodsCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
