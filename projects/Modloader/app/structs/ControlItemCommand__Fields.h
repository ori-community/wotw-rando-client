#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlItemCommand__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlItemCommand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItemCommand__Fields_DEFINED)
#include <Modloader/app/structs/ControlItemAction__Enum.h>
#if defined(IL2CPP_STRUCT_ControlItemAction__Enum_DEFINED)
#define IL2CPP_STRUCT_ControlItemCommand__Fields_DEFINED
struct ControlItem;
struct CommandBinding;
struct __declspec(align(8)) ControlItemCommand__Fields {
    struct ControlItem* Dynamic;
    struct CommandBinding* Static;
    ControlItemAction__Enum Action;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlItemCommand__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControlItemCommand__Fields_FWDDECL
#include <Modloader/app/structs/CommandBinding.h>
#include <Modloader/app/structs/ControlItem.h>
#endif
#undef IL2CPP_STRUCT_ControlItemCommand__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlItemCommand__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControlItemCommand__Fields_FWDDECL)
#include <Modloader/app/structs/ControlItemCommand__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlItemCommand__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
