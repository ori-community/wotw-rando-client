#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_DEFINED
struct MessageProvider;
struct ShowAreaMessageAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MessageProvider* Message;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowAreaMessageAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowAreaMessageAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
