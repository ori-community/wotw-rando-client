#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UILineInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UILineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UILineInfo_DEFINED)
#define IL2CPP_STRUCT_UILineInfo_DEFINED
struct UILineInfo {
    int32_t startCharIdx;
    int32_t height;
    float topY;
    float leading;
};
#endif
#if !defined(IL2CPP_STRUCT_UILineInfo_FWDDECL)
#define IL2CPP_STRUCT_UILineInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UILineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UILineInfo_DEFINED) && !defined(IL2CPP_STRUCT_UILineInfo_FWDDECL)
#include <Modloader/app/structs/UILineInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UILineInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
