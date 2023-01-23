#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationSettingsBase__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationSettingsBase__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase__VTable_DEFINED)
#define IL2CPP_STRUCT_ApplicationSettingsBase__VTable_DEFINED
struct ApplicationSettingsBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Context;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Properties;
    VirtualInvokeData get_PropertyValues;
    VirtualInvokeData get_Providers;
    VirtualInvokeData Save;
    VirtualInvokeData add_PropertyChanged;
    VirtualInvokeData remove_PropertyChanged;
    VirtualInvokeData OnPropertyChanged;
    VirtualInvokeData OnSettingChanging;
    VirtualInvokeData OnSettingsLoaded;
    VirtualInvokeData OnSettingsSaving;
    VirtualInvokeData Upgrade;
};
#endif
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase__VTable_FWDDECL)
#define IL2CPP_STRUCT_ApplicationSettingsBase__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ApplicationSettingsBase__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationSettingsBase__VTable_FWDDECL)
#include <Modloader/app/structs/ApplicationSettingsBase__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationSettingsBase__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
