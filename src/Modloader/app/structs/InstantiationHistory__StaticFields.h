#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationHistory__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationHistory__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InstantiationHistory__StaticFields_DEFINED
struct InstantiationHistory;
struct InstantiationHistory__StaticFields {
    bool VerboseMode;
    struct InstantiationHistory* m_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiationHistory__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InstantiationHistory__StaticFields_FWDDECL
#include <Modloader/app/structs/InstantiationHistory.h>
#endif
#undef IL2CPP_STRUCT_InstantiationHistory__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationHistory__StaticFields_FWDDECL)
#include <Modloader/app/structs/InstantiationHistory__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationHistory__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
