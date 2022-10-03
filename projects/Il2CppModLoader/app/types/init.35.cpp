#include <Il2CppModLoader/app/types/AggregateNode.h>
#include <Il2CppModLoader/app/types/AggregateType__Enum.h>
#include <Il2CppModLoader/app/types/BoolStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/BooleanUberState.h>
#include <Il2CppModLoader/app/types/BooleanUberStateCondition.h>
#include <Il2CppModLoader/app/types/ByteStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/ByteUberState.h>
#include <Il2CppModLoader/app/types/ByteUberStateCondition.h>
#include <Il2CppModLoader/app/types/CRC32.h>
#include <Il2CppModLoader/app/types/ColumnTypeConverter.h>
#include <Il2CppModLoader/app/types/ConditionUberState.h>
#include <Il2CppModLoader/app/types/Constraint_1.h>
#include <Il2CppModLoader/app/types/DataColumn.h>
#include <Il2CppModLoader/app/types/DataColumn__Array.h>
#include <Il2CppModLoader/app/types/DataCommonEventSource.h>
#include <Il2CppModLoader/app/types/DataExpression.h>
#include <Il2CppModLoader/app/types/DataKey.h>
#include <Il2CppModLoader/app/types/DataRelation.h>
#include <Il2CppModLoader/app/types/DataSet.h>
#include <Il2CppModLoader/app/types/DataSetDateTime__Enum.h>
#include <Il2CppModLoader/app/types/DataTable.h>
#include <Il2CppModLoader/app/types/DataView.h>
#include <Il2CppModLoader/app/types/DataViewManager.h>
#include <Il2CppModLoader/app/types/DataViewRowState__Enum.h>
#include <Il2CppModLoader/app/types/DataViewSetting.h>
#include <Il2CppModLoader/app/types/DataViewSettingCollection.h>
#include <Il2CppModLoader/app/types/DeflateManager.h>
#include <Il2CppModLoader/app/types/DeflateManager_CompressFunc.h>
#include <Il2CppModLoader/app/types/DeflateManager_Config.h>
#include <Il2CppModLoader/app/types/DeflateManager_Config__Array.h>
#include <Il2CppModLoader/app/types/DesiredUberStateBool.h>
#include <Il2CppModLoader/app/types/DesiredUberStateByte.h>
#include <Il2CppModLoader/app/types/DesiredUberStateComposite.h>
#include <Il2CppModLoader/app/types/DesiredUberStateFloat.h>
#include <Il2CppModLoader/app/types/DesiredUberStateGeneric.h>
#include <Il2CppModLoader/app/types/DesiredUberStateInt.h>
#include <Il2CppModLoader/app/types/FloatRangeUberStatePair.h>
#include <Il2CppModLoader/app/types/FloatStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/FloatUberState.h>
#include <Il2CppModLoader/app/types/FlushType__Enum.h>
#include <Il2CppModLoader/app/types/GZipStream_1.h>
#include <Il2CppModLoader/app/types/GenericDataContainer.h>
#include <Il2CppModLoader/app/types/GenericMappingEntry.h>
#include <Il2CppModLoader/app/types/IDesiredUberState__Array.h>
#include <Il2CppModLoader/app/types/IUberState__Array.h>
#include <Il2CppModLoader/app/types/Index.h>
#include <Il2CppModLoader/app/types/IndexField.h>
#include <Il2CppModLoader/app/types/IndexedState.h>
#include <Il2CppModLoader/app/types/InfTree.h>
#include <Il2CppModLoader/app/types/InflateBlocks.h>
#include <Il2CppModLoader/app/types/InflateCodes.h>
#include <Il2CppModLoader/app/types/InflateManager.h>
#include <Il2CppModLoader/app/types/IntStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/IntUberState.h>
#include <Il2CppModLoader/app/types/IntUberStateCondition.h>
#include <Il2CppModLoader/app/types/IntUberStateMatcher_IntRangeUberStatePair.h>
#include <Il2CppModLoader/app/types/InternalDataCollectionBase.h>
#include <Il2CppModLoader/app/types/MappingType__Enum.h>
#include <Il2CppModLoader/app/types/NavigableOnGUI.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver_IntEqualityComparer.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem.h>
#include <Il2CppModLoader/app/types/NewSetupStateControllerResolver_c_DisplayClass20_0.h>
#include <Il2CppModLoader/app/types/NewSetupStateController_ChangeModel.h>
#include <Il2CppModLoader/app/types/ObjectUberState.h>
#include <Il2CppModLoader/app/types/PearsonHash.h>
#include <Il2CppModLoader/app/types/PropertyCollection.h>
#include <Il2CppModLoader/app/types/SceneUberStateGroup.h>
#include <Il2CppModLoader/app/types/SerializationFormat__Enum_1.h>
#include <Il2CppModLoader/app/types/SerializedBooleanUberState.h>
#include <Il2CppModLoader/app/types/SerializedByteUberState.h>
#include <Il2CppModLoader/app/types/SerializedFloatUberState.h>
#include <Il2CppModLoader/app/types/SerializedIntUberState.h>
#include <Il2CppModLoader/app/types/SetupState.h>
#include <Il2CppModLoader/app/types/SetupStateModifier.h>
#include <Il2CppModLoader/app/types/SetupStateModifierData.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem_PassiveStateOverride.h>
#include <Il2CppModLoader/app/types/StateOverrideSystem_UberStateOverride.h>
#include <Il2CppModLoader/app/types/StaticTree.h>
#include <Il2CppModLoader/app/types/Tree.h>
#include <Il2CppModLoader/app/types/UberID.h>
#include <Il2CppModLoader/app/types/UberStateArchive.h>
#include <Il2CppModLoader/app/types/UberStateCollection.h>
#include <Il2CppModLoader/app/types/UberStateCollectionGroup.h>
#include <Il2CppModLoader/app/types/UberStateCollectionReference.h>
#include <Il2CppModLoader/app/types/UberStateCondition.h>
#include <Il2CppModLoader/app/types/UberStateConditionHelper_c.h>
#include <Il2CppModLoader/app/types/UberStateController.h>
#include <Il2CppModLoader/app/types/UberStateController_ApplierContext.h>
#include <Il2CppModLoader/app/types/UberStateController_c.h>
#include <Il2CppModLoader/app/types/UberStateException.h>
#include <Il2CppModLoader/app/types/UberStateMatcher.h>
#include <Il2CppModLoader/app/types/UberStateSaveFileHandler.h>
#include <Il2CppModLoader/app/types/UberStateValueGroup.h>
#include <Il2CppModLoader/app/types/UberStateValueStore.h>
#include <Il2CppModLoader/app/types/UniqueConstraint.h>
#include <Il2CppModLoader/app/types/ZlibBaseStream.h>
#include <Il2CppModLoader/app/types/ZlibCodec.h>
#include <Il2CppModLoader/app/types/ZlibException.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionHelper_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateConditionHelper_c__Class** type_info = (::app::UberStateConditionHelper_c__Class**)(modloader::win::memory::resolve_rva(0x04729C18));
    }
    namespace SerializedBooleanUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedBooleanUberState__Class** type_info = (::app::SerializedBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0471D768));
    }
    namespace UberID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberID__Class** type_info = (::app::UberID__Class**)(modloader::win::memory::resolve_rva(0x04766D98));
    }
    namespace UberStateArchive {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateArchive__Class** type_info = (::app::UberStateArchive__Class**)(modloader::win::memory::resolve_rva(0x04733250));
    }
    namespace DesiredUberStateBool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateBool__Class** type_info = (::app::DesiredUberStateBool__Class**)(modloader::win::memory::resolve_rva(0x04741A60));
    }
    namespace DesiredUberStateByte {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateByte__Class** type_info = (::app::DesiredUberStateByte__Class**)(modloader::win::memory::resolve_rva(0x04704228));
    }
    namespace DesiredUberStateComposite {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateComposite__Class** type_info = (::app::DesiredUberStateComposite__Class**)(modloader::win::memory::resolve_rva(0x04750288));
    }
    namespace DesiredUberStateFloat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateFloat__Class** type_info = (::app::DesiredUberStateFloat__Class**)(modloader::win::memory::resolve_rva(0x04777670));
    }
    namespace SerializedFloatUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedFloatUberState__Class** type_info = (::app::SerializedFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x047249F0));
    }
    namespace DesiredUberStateInt {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateInt__Class** type_info = (::app::DesiredUberStateInt__Class**)(modloader::win::memory::resolve_rva(0x04749AF0));
    }
    namespace SerializedIntUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedIntUberState__Class** type_info = (::app::SerializedIntUberState__Class**)(modloader::win::memory::resolve_rva(0x0471C838));
    }
    namespace IUberState__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUberState__Array__Class** type_info = (::app::IUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x047331A0));
    }
    namespace IDesiredUberState__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDesiredUberState__Array__Class** type_info = (::app::IDesiredUberState__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B538));
    }
    namespace UberStateCollection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollection__Class** type_info = (::app::UberStateCollection__Class**)(modloader::win::memory::resolve_rva(0x04706B28));
    }
    namespace UberStateCollectionGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollectionGroup__Class** type_info = (::app::UberStateCollectionGroup__Class**)(modloader::win::memory::resolve_rva(0x0477BC58));
    }
    namespace UberStateCollectionReference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCollectionReference__Class** type_info = (::app::UberStateCollectionReference__Class**)(modloader::win::memory::resolve_rva(0x04784130));
    }
    namespace SetupStateModifierData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateModifierData__Class** type_info = (::app::SetupStateModifierData__Class**)(modloader::win::memory::resolve_rva(0x04720E38));
    }
    namespace GenericMappingEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericMappingEntry__Class** type_info = (::app::GenericMappingEntry__Class**)(modloader::win::memory::resolve_rva(0x04768190));
    }
    namespace BoolStateMap_Mapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BoolStateMap_Mapping__Class** type_info = (::app::BoolStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x04732F58));
    }
    namespace ByteStateMap_Mapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByteStateMap_Mapping__Class** type_info = (::app::ByteStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x0470A458));
    }
    namespace FloatStateMap_Mapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatStateMap_Mapping__Class** type_info = (::app::FloatStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x047726F0));
    }
    namespace GenericDataContainer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GenericDataContainer__Class** type_info = (::app::GenericDataContainer__Class**)(modloader::win::memory::resolve_rva(0x047317D0));
    }
    namespace IntStateMap_Mapping {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntStateMap_Mapping__Class** type_info = (::app::IntStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x047596D0));
    }
    namespace SetupStateModifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateModifier__Class** type_info = (::app::SetupStateModifier__Class**)(modloader::win::memory::resolve_rva(0x04785A50));
    }
    namespace SetupState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetupState__Class** type_info = (::app::SetupState__Class**)(modloader::win::memory::resolve_rva(0x04725E08));
    }
    namespace NewSetupStateControllerResolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver__Class** type_info = (::app::NewSetupStateControllerResolver__Class**)(modloader::win::memory::resolve_rva(0x0478FCC8));
    }
    namespace NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class** type_info = (::app::NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class**)(modloader::win::memory::resolve_rva(0x04773638));
    }
    namespace NewSetupStateController_ChangeModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateController_ChangeModel__Class** type_info = (::app::NewSetupStateController_ChangeModel__Class**)(modloader::win::memory::resolve_rva(0x0472BCD8));
    }
    namespace IndexedState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IndexedState__Class** type_info = (::app::IndexedState__Class**)(modloader::win::memory::resolve_rva(0x0471FA60));
    }
    namespace UberStateMatcher {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateMatcher__Class** type_info = (::app::UberStateMatcher__Class**)(modloader::win::memory::resolve_rva(0x0477DBE0));
    }
    namespace FloatRangeUberStatePair {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatRangeUberStatePair__Class** type_info = (::app::FloatRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x047018C8));
    }
    namespace IntUberStateMatcher_IntRangeUberStatePair {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntUberStateMatcher_IntRangeUberStatePair__Class** type_info = (::app::IntUberStateMatcher_IntRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x0472E400));
    }
    namespace StateOverrideSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem__Class** type_info = (::app::StateOverrideSystem__Class**)(modloader::win::memory::resolve_rva(0x0475A428));
    }
    namespace StateOverrideSystem_UberStateOverride {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem_UberStateOverride__Class** type_info = (::app::StateOverrideSystem_UberStateOverride__Class**)(modloader::win::memory::resolve_rva(0x0476AED8));
    }
    namespace StateOverrideSystem_PassiveStateOverride {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StateOverrideSystem_PassiveStateOverride__Class** type_info = (::app::StateOverrideSystem_PassiveStateOverride__Class**)(modloader::win::memory::resolve_rva(0x0476F810));
    }
    namespace UberStateCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateCondition__Class** type_info = (::app::UberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0472FA90));
    }
    namespace BooleanUberStateCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BooleanUberStateCondition__Class** type_info = (::app::BooleanUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x047770F8));
    }
    namespace ByteUberStateCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByteUberStateCondition__Class** type_info = (::app::ByteUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0471DA48));
    }
    namespace IntUberStateCondition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntUberStateCondition__Class** type_info = (::app::IntUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x04744C68));
    }
    namespace DesiredUberStateGeneric {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredUberStateGeneric__Class** type_info = (::app::DesiredUberStateGeneric__Class**)(modloader::win::memory::resolve_rva(0x04759970));
    }
    namespace UberStateController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateController__Class** type_info = (::app::UberStateController__Class**)(modloader::win::memory::resolve_rva(0x04739128));
    }
    namespace UberStateController_ApplierContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateController_ApplierContext__Class** type_info = (::app::UberStateController_ApplierContext__Class**)(modloader::win::memory::resolve_rva(0x0477C628));
    }
    namespace SceneUberStateGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneUberStateGroup__Class** type_info = (::app::SceneUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x047941E0));
    }
    namespace UberStateValueStore {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateValueStore__Class** type_info = (::app::UberStateValueStore__Class**)(modloader::win::memory::resolve_rva(0x0475DF90));
    }
    namespace UberStateValueGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateValueGroup__Class** type_info = (::app::UberStateValueGroup__Class**)(modloader::win::memory::resolve_rva(0x04730EA8));
    }
    namespace UberStateController_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateController_c__Class** type_info = (::app::UberStateController_c__Class**)(modloader::win::memory::resolve_rva(0x0478E478));
    }
    namespace UberStateSaveFileHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateSaveFileHandler__Class** type_info = (::app::UberStateSaveFileHandler__Class**)(modloader::win::memory::resolve_rva(0x04702660));
    }
    namespace UberStateException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateException__Class** type_info = (::app::UberStateException__Class**)(modloader::win::memory::resolve_rva(0x047546F8));
    }
    namespace NewSetupStateControllerResolver_IntEqualityComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver_IntEqualityComparer__Class** type_info = (::app::NewSetupStateControllerResolver_IntEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x047731D0));
    }
    namespace NewSetupStateControllerResolver_c_DisplayClass20_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class** type_info = (::app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class**)(modloader::win::memory::resolve_rva(0x047468B8));
    }
    namespace PearsonHash {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PearsonHash__Class** type_info = (::app::PearsonHash__Class**)(modloader::win::memory::resolve_rva(0x04787260));
    }
    namespace BooleanUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BooleanUberState__Class** type_info = (::app::BooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0473B6E0));
    }
    namespace ByteUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ByteUberState__Class** type_info = (::app::ByteUberState__Class**)(modloader::win::memory::resolve_rva(0x04798970));
    }
    namespace ConditionUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConditionUberState__Class** type_info = (::app::ConditionUberState__Class**)(modloader::win::memory::resolve_rva(0x04762DD0));
    }
    namespace FloatUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FloatUberState__Class** type_info = (::app::FloatUberState__Class**)(modloader::win::memory::resolve_rva(0x04708810));
    }
    namespace IntUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntUberState__Class** type_info = (::app::IntUberState__Class**)(modloader::win::memory::resolve_rva(0x04750038));
    }
    namespace ObjectUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectUberState__Class** type_info = (::app::ObjectUberState__Class**)(modloader::win::memory::resolve_rva(0x0471B4B0));
    }
    namespace SerializedByteUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializedByteUberState__Class** type_info = (::app::SerializedByteUberState__Class**)(modloader::win::memory::resolve_rva(0x047907B0));
    }
    namespace NavigableOnGUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NavigableOnGUI__Class** type_info = (::app::NavigableOnGUI__Class**)(modloader::win::memory::resolve_rva(0x04786E48));
    }
    namespace DeflateManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateManager__Class** type_info = (::app::DeflateManager__Class**)(modloader::win::memory::resolve_rva(0x04723670));
    }
    namespace DeflateManager_CompressFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateManager_CompressFunc__Class** type_info = (::app::DeflateManager_CompressFunc__Class**)(modloader::win::memory::resolve_rva(0x04756818));
    }
    namespace FlushType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FlushType__Enum__Class** type_info = (::app::FlushType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04711EB0));
    }
    namespace ZlibCodec {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZlibCodec__Class** type_info = (::app::ZlibCodec__Class**)(modloader::win::memory::resolve_rva(0x0474B430));
    }
    namespace InflateManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InflateManager__Class** type_info = (::app::InflateManager__Class**)(modloader::win::memory::resolve_rva(0x0472E0B0));
    }
    namespace InflateBlocks {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InflateBlocks__Class** type_info = (::app::InflateBlocks__Class**)(modloader::win::memory::resolve_rva(0x047790A8));
    }
    namespace InflateCodes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InflateCodes__Class** type_info = (::app::InflateCodes__Class**)(modloader::win::memory::resolve_rva(0x047301D8));
    }
    namespace InfTree {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InfTree__Class** type_info = (::app::InfTree__Class**)(modloader::win::memory::resolve_rva(0x047586D0));
    }
    namespace DeflateManager_Config {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateManager_Config__Class** type_info = (::app::DeflateManager_Config__Class**)(modloader::win::memory::resolve_rva(0x04788738));
    }
    namespace DeflateManager_Config__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateManager_Config__Array__Class** type_info = (::app::DeflateManager_Config__Array__Class**)(modloader::win::memory::resolve_rva(0x04724000));
    }
    namespace Tree {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Tree__Class** type_info = (::app::Tree__Class**)(modloader::win::memory::resolve_rva(0x04779398));
    }
    namespace StaticTree {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StaticTree__Class** type_info = (::app::StaticTree__Class**)(modloader::win::memory::resolve_rva(0x04776748));
    }
    namespace GZipStream_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GZipStream_1__Class** type_info = (::app::GZipStream_1__Class**)(modloader::win::memory::resolve_rva(0x0478E0B0));
    }
    namespace ZlibBaseStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZlibBaseStream__Class** type_info = (::app::ZlibBaseStream__Class**)(modloader::win::memory::resolve_rva(0x0471ADC8));
    }
    namespace CRC32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CRC32__Class** type_info = (::app::CRC32__Class**)(modloader::win::memory::resolve_rva(0x0478FFC8));
    }
    namespace ZlibException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ZlibException__Class** type_info = (::app::ZlibException__Class**)(modloader::win::memory::resolve_rva(0x04757328));
    }
    namespace InternalDataCollectionBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InternalDataCollectionBase__Class** type_info = (::app::InternalDataCollectionBase__Class**)(modloader::win::memory::resolve_rva(0x04779AB0));
    }
    namespace ColumnTypeConverter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ColumnTypeConverter__Class** type_info = (::app::ColumnTypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04718D38));
    }
    namespace DataCommonEventSource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataCommonEventSource__Class** type_info = (::app::DataCommonEventSource__Class**)(modloader::win::memory::resolve_rva(0x047203D0));
    }
    namespace Constraint_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Constraint_1__Class** type_info = (::app::Constraint_1__Class**)(modloader::win::memory::resolve_rva(0x04770B40));
    }
    namespace SerializationFormat__Enum_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationFormat__Enum_1__Class** type_info = (::app::SerializationFormat__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04771198));
    }
    namespace DataSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataSet__Class** type_info = (::app::DataSet__Class**)(modloader::win::memory::resolve_rva(0x04777BB8));
    }
    namespace DataViewManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewManager__Class** type_info = (::app::DataViewManager__Class**)(modloader::win::memory::resolve_rva(0x0473CDC0));
    }
    namespace DataViewSettingCollection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewSettingCollection__Class** type_info = (::app::DataViewSettingCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F290));
    }
    namespace DataViewRowState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewRowState__Enum__Class** type_info = (::app::DataViewRowState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796098));
    }
    namespace DataViewSetting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataViewSetting__Class** type_info = (::app::DataViewSetting__Class**)(modloader::win::memory::resolve_rva(0x0474B828));
    }
    namespace DataTable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataTable__Class** type_info = (::app::DataTable__Class**)(modloader::win::memory::resolve_rva(0x04734058));
    }
    namespace DataView {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataView__Class** type_info = (::app::DataView__Class**)(modloader::win::memory::resolve_rva(0x04768DA8));
    }
    namespace Index {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Index__Class** type_info = (::app::Index__Class**)(modloader::win::memory::resolve_rva(0x047488F0));
    }
    namespace IndexField {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IndexField__Class** type_info = (::app::IndexField__Class**)(modloader::win::memory::resolve_rva(0x047253B8));
    }
    namespace DataSetDateTime__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataSetDateTime__Enum__Class** type_info = (::app::DataSetDateTime__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470AD68));
    }
    namespace MappingType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MappingType__Enum__Class** type_info = (::app::MappingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04778520));
    }
    namespace DataColumn {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataColumn__Class** type_info = (::app::DataColumn__Class**)(modloader::win::memory::resolve_rva(0x04713A18));
    }
    namespace DataExpression {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataExpression__Class** type_info = (::app::DataExpression__Class**)(modloader::win::memory::resolve_rva(0x04707590));
    }
    namespace AggregateType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AggregateType__Enum__Class** type_info = (::app::AggregateType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F8C0));
    }
    namespace AggregateNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AggregateNode__Class** type_info = (::app::AggregateNode__Class**)(modloader::win::memory::resolve_rva(0x04744E98));
    }
    namespace DataKey {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataKey__Class** type_info = (::app::DataKey__Class**)(modloader::win::memory::resolve_rva(0x0477B878));
    }
    namespace DataRelation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataRelation__Class** type_info = (::app::DataRelation__Class**)(modloader::win::memory::resolve_rva(0x0472F728));
    }
    namespace PropertyCollection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyCollection__Class** type_info = (::app::PropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F370));
    }
    namespace DataColumn__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataColumn__Array__Class** type_info = (::app::DataColumn__Array__Class**)(modloader::win::memory::resolve_rva(0x04771380));
    }
    namespace UniqueConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UniqueConstraint__Class** type_info = (::app::UniqueConstraint__Class**)(modloader::win::memory::resolve_rva(0x04721658));
    }
} // namespace app::classes::types
