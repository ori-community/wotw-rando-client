#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_QuestsController__StaticFields_DEFINED
struct QuestsController;
struct Quest__Array;
struct QuestsController__StaticFields {
    struct QuestsController* Instance;
    struct Quest__Array* InitialQuests;
};
#endif
#if !defined(IL2CPP_STRUCT_QuestsController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_QuestsController__StaticFields_FWDDECL
#include <Modloader/app/structs/Quest__Array.h>
#include <Modloader/app/structs/QuestsController.h>
#endif
#undef IL2CPP_STRUCT_QuestsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_QuestsController__StaticFields_FWDDECL)
#include <Modloader/app/structs/QuestsController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
