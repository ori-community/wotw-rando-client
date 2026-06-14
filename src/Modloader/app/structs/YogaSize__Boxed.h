#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YogaSize__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YogaSize__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaSize__Boxed_DEFINED)
#include <Modloader/app/structs/YogaSize.h>
#if defined(IL2CPP_STRUCT_YogaSize_DEFINED)
#define IL2CPP_STRUCT_YogaSize__Boxed_DEFINED
struct YogaSize__Class;
struct YogaSize__Boxed {
    struct YogaSize__Class* klass;
    MonitorData* monitor;
    struct YogaSize fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_YogaSize__Boxed_FWDDECL)
#define IL2CPP_STRUCT_YogaSize__Boxed_FWDDECL
#include <Modloader/app/structs/YogaSize__Class.h>
#endif
#undef IL2CPP_STRUCT_YogaSize__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaSize__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_YogaSize__Boxed_FWDDECL)
#include <Modloader/app/structs/YogaSize__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YogaSize__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
