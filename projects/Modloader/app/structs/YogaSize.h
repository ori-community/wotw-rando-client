#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YogaSize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YogaSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaSize_DEFINED)
#define IL2CPP_STRUCT_YogaSize_DEFINED
struct YogaSize {
    float width;
    float height;
};
#endif
#if !defined(IL2CPP_STRUCT_YogaSize_FWDDECL)
#define IL2CPP_STRUCT_YogaSize_FWDDECL
#endif
#undef IL2CPP_STRUCT_YogaSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaSize_DEFINED) && !defined(IL2CPP_STRUCT_YogaSize_FWDDECL)
#include <Modloader/app/structs/YogaSize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YogaSize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
