#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LagoonBubble_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LagoonBubble_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonBubble_DEFINED)
#include <Modloader/app/structs/LagoonBubble__Fields.h>
#if defined(IL2CPP_STRUCT_LagoonBubble__Fields_DEFINED)
#define IL2CPP_STRUCT_LagoonBubble_DEFINED
struct LagoonBubble__Class;
struct LagoonBubble {
    struct LagoonBubble__Class* klass;
    MonitorData* monitor;
    struct LagoonBubble__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LagoonBubble_FWDDECL)
#define IL2CPP_STRUCT_LagoonBubble_FWDDECL
#include <Modloader/app/structs/LagoonBubble__Class.h>
#endif
#undef IL2CPP_STRUCT_LagoonBubble_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonBubble_DEFINED) && !defined(IL2CPP_STRUCT_LagoonBubble_FWDDECL)
#include <Modloader/app/structs/LagoonBubble.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LagoonBubble.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
