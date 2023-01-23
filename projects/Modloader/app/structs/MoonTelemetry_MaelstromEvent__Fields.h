#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_DEFINED
struct String;
struct Object;
struct __declspec(align(8)) MoonTelemetry_MaelstromEvent__Fields {
    struct String* name;
    int32_t typeId;
    int32_t sequenceId;
    struct String* timestampUtc;
    struct Object* body;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_MaelstromEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
