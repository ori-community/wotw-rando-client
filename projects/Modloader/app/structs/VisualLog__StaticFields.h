#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisualLog__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisualLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualLog__StaticFields_DEFINED)
#define IL2CPP_STRUCT_VisualLog__StaticFields_DEFINED
struct VisualLog;
struct VisualLog__StaticFields {
    struct VisualLog* s_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_VisualLog__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_VisualLog__StaticFields_FWDDECL
#include <Modloader/app/structs/VisualLog.h>
#endif
#undef IL2CPP_STRUCT_VisualLog__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualLog__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_VisualLog__StaticFields_FWDDECL)
#include <Modloader/app/structs/VisualLog__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisualLog__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
