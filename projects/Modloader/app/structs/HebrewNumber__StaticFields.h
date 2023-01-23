#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HebrewNumber__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HebrewNumber__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumber__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HebrewNumber__StaticFields_DEFINED
struct HebrewNumber_HebrewValue__Array;
struct HebrewNumber_HS__Enum__Array__Array;
struct HebrewNumber__StaticFields {
    struct HebrewNumber_HebrewValue__Array* HebrewValues;
    uint16_t maxHebrewNumberCh;
    struct HebrewNumber_HS__Enum__Array__Array* NumberPasingState;
};
#endif
#if !defined(IL2CPP_STRUCT_HebrewNumber__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HebrewNumber__StaticFields_FWDDECL
#include <Modloader/app/structs/HebrewNumber_HS__Enum__Array__Array.h>
#include <Modloader/app/structs/HebrewNumber_HebrewValue__Array.h>
#endif
#undef IL2CPP_STRUCT_HebrewNumber__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumber__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HebrewNumber__StaticFields_FWDDECL)
#include <Modloader/app/structs/HebrewNumber__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HebrewNumber__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
