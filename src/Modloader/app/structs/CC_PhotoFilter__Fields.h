#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_PhotoFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_PhotoFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter__Fields_DEFINED)
#include <Modloader/app/structs/CC_Base__Fields.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_CC_Base__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CC_PhotoFilter__Fields_DEFINED
struct CC_PhotoFilter__Fields {
    struct CC_Base__Fields _;
    struct Color color;
    float density;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_CC_PhotoFilter__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CC_PhotoFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CC_PhotoFilter__Fields_FWDDECL)
#include <Modloader/app/structs/CC_PhotoFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_PhotoFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
