#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboMove__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMove__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboMove__Fields_DEFINED
struct ComboMoveSettings;
struct SeinComboHandler;
struct List_1_Moon_ComboSystem_ComboInput_;
struct __declspec(align(8)) ComboMove__Fields {
    struct ComboMoveSettings* ComboMoveSettings;
    int32_t m_usesInCurrentCombo;
    struct SeinComboHandler* m_comboHandler;
    struct List_1_Moon_ComboSystem_ComboInput_* m_validInputs;
};
#endif
#if !defined(IL2CPP_STRUCT_ComboMove__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComboMove__Fields_FWDDECL
#include <Modloader/app/structs/ComboMoveSettings.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_ComboInput_.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#endif
#undef IL2CPP_STRUCT_ComboMove__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMove__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComboMove__Fields_FWDDECL)
#include <Modloader/app/structs/ComboMove__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboMove__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
