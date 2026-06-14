#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReportLocationAction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReportLocationAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportLocationAction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ReportLocationAction__StaticFields_DEFINED
struct Action;
struct ReportLocationAction__StaticFields {
    struct Action* OnAct1End;
    struct Action* OnAct2End;
    struct Action* OnAct3End;
};
#endif
#if !defined(IL2CPP_STRUCT_ReportLocationAction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReportLocationAction__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_ReportLocationAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReportLocationAction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReportLocationAction__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReportLocationAction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReportLocationAction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
