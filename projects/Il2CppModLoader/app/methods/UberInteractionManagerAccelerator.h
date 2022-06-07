#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberInteractionManagerAccelerator {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CellSize, (app::UberInteractionManagerAccelerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_InvCellSize, (app::UberInteractionManagerAccelerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberInteractionManagerAccelerator_Cell__Array *, get_Cells, (app::UberInteractionManagerAccelerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::UberInteractionManagerAccelerator_CellInteractionData__Array *, get_DynamicObjects, (app::UberInteractionManagerAccelerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCB540, void, ctor, (app::UberInteractionManagerAccelerator * this_ptr, float cell_size, int32_t split_count))
    IL2CPP_REGISTER_METHOD(0x00FCB870, app::Vector3Int, GetCellCoordinates, (app::UberInteractionManagerAccelerator * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00FCB8C0, app::UberInteractionManagerAccelerator_Cell *, GetCell, (app::UberInteractionManagerAccelerator * this_ptr, int32_t x, int32_t y, int32_t z))
    IL2CPP_REGISTER_METHOD(0x00FCB930, void, Clear, (app::UberInteractionManagerAccelerator * this_ptr))
}
