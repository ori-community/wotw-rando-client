#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonByte_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonByte_DEFINED)
#include <Modloader/app/structs/MoonByte__Fields.h>
#if defined(IL2CPP_STRUCT_MoonByte__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonByte_DEFINED
struct MoonByte__Class;
struct MoonByte {
    struct MoonByte__Class* klass;
    MonitorData* monitor;
    struct MoonByte__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonByte_FWDDECL)
#define IL2CPP_STRUCT_MoonByte_FWDDECL
#include <Modloader/app/structs/MoonByte__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonByte_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonByte_DEFINED) && !defined(IL2CPP_STRUCT_MoonByte_FWDDECL)
#include <Modloader/app/structs/MoonByte.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonByte.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
