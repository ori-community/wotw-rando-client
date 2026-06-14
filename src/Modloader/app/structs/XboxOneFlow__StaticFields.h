#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneFlow__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneFlow__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneFlow__StaticFields_DEFINED
struct XboxOneFlow;
struct XboxOneFlow__StaticFields {
    struct XboxOneFlow* s_instance;
    bool m_showXboxFlowDebug;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneFlow__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneFlow__StaticFields_FWDDECL
#include <Modloader/app/structs/XboxOneFlow.h>
#endif
#undef IL2CPP_STRUCT_XboxOneFlow__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneFlow__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneFlow__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneFlow__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
