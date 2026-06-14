#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureCollection__Fields_DEFINED
struct Group;
struct Capture__Array;
struct __declspec(align(8)) CaptureCollection__Fields {
    struct Group* _group;
    int32_t _capcount;
    struct Capture__Array* _captures;
};
#endif
#if !defined(IL2CPP_STRUCT_CaptureCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_CaptureCollection__Fields_FWDDECL
#include <Modloader/app/structs/Capture__Array.h>
#include <Modloader/app/structs/Group.h>
#endif
#undef IL2CPP_STRUCT_CaptureCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CaptureCollection__Fields_FWDDECL)
#include <Modloader/app/structs/CaptureCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
