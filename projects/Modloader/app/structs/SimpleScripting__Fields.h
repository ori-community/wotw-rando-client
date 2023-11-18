#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleScripting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleScripting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleScripting__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleScripting__Fields_DEFINED
struct Browser;
struct Color__Array;
struct SimpleScripting__Fields {
    struct MonoBehaviour__Fields _;
    struct Browser* browser;
    int32_t colorIdx;
    struct Color__Array* colors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleScripting__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleScripting__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/Color__Array.h>
#endif
#undef IL2CPP_STRUCT_SimpleScripting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleScripting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleScripting__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleScripting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleScripting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
