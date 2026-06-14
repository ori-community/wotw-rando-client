#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDecorator_DEFINED)
#include <Modloader/app/structs/ConditionalDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionalDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalDecorator_DEFINED
struct ConditionalDecorator__Class;
struct ConditionalDecorator {
    struct ConditionalDecorator__Class* klass;
    MonitorData* monitor;
    struct ConditionalDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalDecorator_FWDDECL)
#define IL2CPP_STRUCT_ConditionalDecorator_FWDDECL
#include <Modloader/app/structs/ConditionalDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionalDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDecorator_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalDecorator_FWDDECL)
#include <Modloader/app/structs/ConditionalDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
