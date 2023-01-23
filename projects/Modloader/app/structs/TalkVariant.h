#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TalkVariant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TalkVariant_INITIALIZING
#if !defined(IL2CPP_STRUCT_TalkVariant_DEFINED)
#include <Modloader/app/structs/TalkVariant__Fields.h>
#if defined(IL2CPP_STRUCT_TalkVariant__Fields_DEFINED)
#define IL2CPP_STRUCT_TalkVariant_DEFINED
struct TalkVariant__Class;
struct TalkVariant {
    struct TalkVariant__Class* klass;
    MonitorData* monitor;
    struct TalkVariant__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TalkVariant_FWDDECL)
#define IL2CPP_STRUCT_TalkVariant_FWDDECL
#include <Modloader/app/structs/TalkVariant__Class.h>
#endif
#undef IL2CPP_STRUCT_TalkVariant_INITIALIZING
#if !defined(IL2CPP_STRUCT_TalkVariant_DEFINED) && !defined(IL2CPP_STRUCT_TalkVariant_FWDDECL)
#include <Modloader/app/structs/TalkVariant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TalkVariant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
